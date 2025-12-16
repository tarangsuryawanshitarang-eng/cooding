# #create a program to teach basic python syntax
# print("Hello World!")  # This line prints a greeting message to the console    
# # Variables and Data Types
# name = "Alice"  # String variable   
# age = 25  # Integer variable
# is_student = True  # Boolean variable
# # Print variable values
# print("Name:", name)
# print("Age:", age)
# print("Is student:", is_student)

#---------------------------------------------------------------------------------------

# # Basic Arithmetic Operations
# a = 10
# b = 3
# print("a =",a, "\n""b =",b)
# result = a + b          # Addition          
# print("Addition:", result)
# result = a - b          # Subtraction
# print("Subtraction:", result)
# result = a * b          # Multiplication
# print("Multiplication:", result)
# result = a / b          # Division
# print("Division:", result)
# result = a % b          # Modulus
# print("Modulus:", result)
# result = a ** b         # Exponentiation
# print("Exponentiation:", result)
# result = a // b         # Floor Division
# print("Floor Division:", result)


#---------------------------------------------------------------------------------------

## Control Structures
## If-Else Statement
# num = 7
# if num % 2 == 0:
#     print(num, "is even")
# else:
#     print(num, "is odd")  


#---------------------------------------------------------------------------------------


## For Loop
# print("For Loop:")
# for i in range(0,6):   # Loop from 0 to n-1 ;
# for i in range(1,6):   # Loop from 1 to n ;
# for i in range(6):   # Loop from 0 to n-1 ;
#      print("Iteration:", i)

#---------------------------------------------------------------------------------------

# # While Loop
# print("While Loop:")
# count = 0
# while count < 5:
#     print( count)
#     count += 1
  
#---------------------------------------------------------------------------------------

# # Function Definition and Call
# def greet(person):
#     print("Hello " + person + "!")
# greet("Tarang")    # Call the function


#---------------------------------------------------------------------------------------

# # List Operations
# fruits = ["apple", "banana", "cherry"]
# print("Fruits List:", fruits)
# print("First Fruit:", fruits[0])
# print("Last Fruit:", fruits[-1])
# print("Number of Fruits:", len(fruits))
# fruits.append("orange")
# print("Updated Fruits List:", fruits)      
# fruits.remove("banana")
# print("Updated Fruits List:", fruits)     
# fruits.sort() 
# print("Sorted Fruits List:", fruits)      
# fruits.reverse()
# print("Reversed Fruits List:", fruits)         
           
#---------------------------------------------------------------------------------------

# # Dictionary Operations
# person = {"name": "Alice", "age": 25, "city": "New York"}
# print("Person Dictionary:", person)
# print("Name:", person["name"])
# print("Age:", person["age"])
# print("City:", person["city"])
# person["age"] = 26
# print("Updated Person Dictionary:", person)
# person["profession"] = "Engineer"
# print("Updated Person Dictionary:", person)
# del person["city"]
# print("Updated Person Dictionary:", person)
# print("Dictionary Keys:", person.keys())
# print("Dictionary Values:", person.values())
# print("Dictionary Items:", person.items())

#---------------------------------------------------------------------------------------

# # Importing Modules
# import math as m
# print("Square root of 25:", m.sqrt(25))
# print("Value of Pi:", m.pi)
# print("Cosine of 0 degrees:", m.cos(m.radians(0)))
# print("Factorial of 5:", m.factorial(5))

#---------------------------------------------------------------------------------------

# # Exception Handling
# try:
#     result = 10 / 0
#     print("Result:", result)
# except ZeroDivisionError:
#     print("Error: Division by zero")  
# finally:
#     print("Execution completed.")
#---------------------------------------------------------------------------------------

# #recursion example
# def factorial(n):
#     if n == 0 or n == 1:
#         return 1
#     else:
#         return n * factorial(n - 1)
# # for i in range(30):
# #     print("Factorial of", i, "is", factorial(i))  
# print( factorial(100))

#---------------------------------------------------------------------------------------

# # fibonacci series using recursion
# def fibonacci(n):
#     if n <= 0:
#         return []
#     elif n == 1:
#         return [0]
#     elif n == 2:
#         return [0, 1]
#     else:
#         fibo = fibonacci(n - 1)
#         fibo.append(fibo[-1] + fibo[-2])
#         return fibo  
# print(fibonacci(26))

#---------------------------------------------------------------------------------------

# # Create a simple class and object
# class Person:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#     def introduce(self):
#         print("Hello, my name is", self.name, "and I am", self.age, "years old.")
# person = Person("Tarang", 18)
# person.introduce()  

#---------------------------------------------------------------------------------------
# # Function Definition and Call
# def greet(person):
#     print("Hello " + person + "!")
# greet("Tarang")    # Call the function

#---------------------------------------------------------------------------------------  
# #filehandling example
# # Writing to a file
# with open("example.txt", "w") as file:
#     file.write("Hello, world!")

# # Reading from a file
# with open("example.txt", "r") as file:
#     content = file.read()
#     print("File content:", content)       
 
     
#---------------------------------------------------------------------------------------    
#  # Exception Handling with File Operations
# try:
#     with open("example.txt", "r") as file:        
#         content = file.read()
#         print("File content:", content)
# except FileNotFoundError:
#     print("Error: File not found.")
# finally:   
#     print("File operation completed.") 
#---------------------------------------------------------------------------------------








