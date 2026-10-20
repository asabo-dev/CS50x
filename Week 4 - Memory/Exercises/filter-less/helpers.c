// Main Exercise for filter-less
// Modify images
// Contains functions for filter.c
#include "helpers.h"
#include <math.h>

int cap(int rgb);

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Take average of red, green, and blue
            int avg;
            avg = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);

            // Update pixel values
            image[i][j].rgbtRed = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtBlue = avg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sepiaRed;
            int sepiaGreen;
            int sepiaBlue;

            // Compute sepia values
            sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen +
                             .189 * image[i][j].rgbtBlue);

            sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen +
                               .168 * image[i][j].rgbtBlue);

            sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen +
                              .131 * image[i][j].rgbtBlue);

            // Ensure sepia values do not exceed 255
            sepiaRed = cap(sepiaRed);
            sepiaGreen = cap(sepiaGreen);
            sepiaBlue = cap(sepiaBlue);

            // Update pixel with sepia values
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over each row
    for (int i = 0; i < height; i++)
    {
        // Swap each pair only once
        for (int j = 0; j < width / 2; j++)
        {
            // Create a temporary variable to store a pixel
            RGBTRIPLE tmp;

            // Store the first pixel temporarily
            tmp = image[i][j];
            // (width - 1 - j) gives the index of the corresponding pixel from the right.
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = tmp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a copy of image
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

    // Loop through every pixel in the image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Declare RGB and Count variables
            int red = 0;
            int green = 0;
            int blue = 0;
            int count = 0;

            // Declare variables to store average RGB values
            int avgRed;
            int avgGreen;
            int avgBlue;

            // For each pixel, examine its surrounding pixels
            // (including the current pixel)
            for (int row = i - 1; row <= i + 1; row++)
            {
                for (int col = j - 1; col <= j + 1; col++)
                {
                    // Check for boundaries
                    if (row >= 0 && row < height && col >= 0 && col < width)
                    {
                        // Add RGB values after each iteration
                        red += copy[row][col].rgbtRed;
                        green += copy[row][col].rgbtGreen;
                        blue += copy[row][col].rgbtBlue;
                        count += 1;
                    }
                }
            }

            // Calculate the averages
            avgRed = round((float) red / count);
            avgGreen = round((float) green / count);
            avgBlue = round((float) blue / count);

            // Update the currrent pixel
            image[i][j].rgbtRed = avgRed;
            image[i][j].rgbtGreen = avgGreen;
            image[i][j].rgbtBlue = avgBlue;
        }
    }

    return;
}

// Helper function to cap max RGB value at 255
int cap(int rgb)
{
    if (rgb > 255)
    {
        rgb = 255;
    }
    return rgb;
}


/*
Terminal Output
$ cd filter-less
filter-less/ $ make filter
filter-less/ $ ./filter -g images/yard.bmp out.bmp
filter-less/ $ ./filter -s images/yard.bmp out.bmp
filter-less/ $ ./filter -r images/yard.bmp out.bmp
filter-less/ $ ./filter -b images/yard.bmp out.bmp
filter-less/ $ style50 helpers.c
filter-less/ $ style50 helpers.c
filter-less/ $ check50 cs50/problems/2026/x/filter/less
Waiting for results.......................
Results for cs50/problems/2026/x/filter/less generated by check50 v4.0.0.dev0
:) helpers.c exists
:) filter compiles
:) grayscale correctly filters single pixel with whole number average
:) grayscale correctly filters single pixel without whole number average
:) grayscale leaves alone pixels that are already gray
:) grayscale correctly filters simple 3x3 image
:) grayscale correctly filters more complex 3x3 image
:) grayscale correctly filters 4x4 image
:) sepia correctly filters single pixel
:) sepia correctly filters simple 3x3 image
:) sepia correctly filters more complex 3x3 image
:) sepia correctly filters 4x4 image
:) reflect correctly filters 1x2 image
:) reflect correctly filters 1x3 image
:) reflect correctly filters image that is its own mirror image
:) reflect correctly filters 3x3 image
:) reflect correctly filters 4x4 image
:) blur correctly filters middle pixel
:) blur correctly filters pixel on edge
:) blur correctly filters pixel in corner
:) blur correctly filters 3x3 image
:) blur correctly filters 4x4 image

*/