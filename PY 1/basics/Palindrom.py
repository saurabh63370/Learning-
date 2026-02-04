# Check if a string is a palindrome
# A palindrome reads the same forwards and backwards
# Example: "madam" is a palindrome
s="madam"
s1=s[::-1]
if s==s1:
    print("Palindrome")
else:
    print("Not a Palindrome")