# Using 'pip' to install Python libraries
import cowsay

cowsay.cow("This is CS50")

"""
Terminal Output
- When 'cowsay' library has not been installed
  this throws an Error Message
  Notes/Code Snippets/cow.py", line 1, in <module>
    import cowsay
ModuleNotFoundError: No module named 'cowsay'
- Use 'pip install cowsay' to have access to the library
"""