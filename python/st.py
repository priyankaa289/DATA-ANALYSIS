students = []

def add_students():
 
 Roll_no=input("Enter Student Rollno:-")
 Name=input("Enter Student Name:-")
 Age=input("Enter Student Age:-")
 Course=input("Enter Student Course:-")

 student={
        "rollno ":Roll_no,
         "name": Name,
         "age": Age,
         "course": Course
}
 
 students.append(student)
 print("Students Add Successfully")



while True:
    print("\n---- Student Management System----")
    print("1. Add student")
    print("2. View Student")
    print("3. Search Student")
    print("4. Update Students Details")
    print("5. Delete students Deatils")
    print("6. Exit")

    choice = int(input("Enter Your Choice:-"))

    if choice == 1:
        add_students()
    elif choice == 2:
        print("View Student")

    elif choice == 3:
         print("Search Student")

    elif choice == 4:
        print("Update Students Details")

    elif choice == 5:
        print("Delete students Deatils")

    elif choice == 6:
        print("Thank You!")
        break
    else:
        print("invalid choice")