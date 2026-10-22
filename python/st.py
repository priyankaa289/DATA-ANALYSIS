students = []

def add_students():
 
    roll_no = input("Enter Student Rollno:-")

    for st in students:
        if st["rollno"] == roll_no:
            print("Student Rollno Already Exists")
            return

    Name = input("Enter Student Name:-")
    Age = input("Enter Student Age:-")
    Course = input("Enter Student Course:-")

    student = {
        "rollno": roll_no,
        "name": Name,
        "age": Age,
        "course": Course
    }

    students.append(student)
    print("Students Added Successfully")

def view_students():
    if not students:
        print("No Students Deatail Found")
        return

    for st in students:
        print("\n Roll No:", st["rollno"])
        print("Name:", st["name"])
        print("Age:", st["age"])
        print("Course:", st["course"])
    
       
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
        view_students()

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