
# Python doesn’t have a built-in do-while loop, but we can mimic it using a while True loop with a break condition.

# Mimic do-while in Python to check password

correct_password = "0123"

while True:
    user_input = input("Enter password: ")
    if user_input == correct_password:
        print("Access granted ✅")
        break
    else:
        print("Wrong password. Try again.")
