# Python implementation of Problem Set 4 (filter-less(blur))
# Modules are imported from Python library

from PIL import Image, ImageFilter

before = Image.open(bridge.bmp)
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.bmp")

"""
This is the implementation in C language

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
"""