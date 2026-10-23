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
         print("Roll No:",st["rollno"])
         print("Name:",st["name"])
         print("Age:",st["age"])
         print("Course:",st["course"])
         
         

def search_students():

 rollno=input("Enter Roll no:-")
 
 for st in students:
      if st["rollno"] == rollno:
          print("Roll No:",st["rollno"])
          print("Name:",st["name"])
          print("Age:",st["age"])
          print("Courae:",st["course"])
          return
      
print("students details not found") 

def delete_studentS():
   
   rollno =input("Enter student roll no:- ")

   for st in students:
       if st["rollno"] == rollno:

           choice = input("Do You Want To Delete? (yes/no) :- ").lower()
           if choice =="yes":
               students.remove(st)
               print("Student Deleted Suceessfully")
               return
           else:
               print("Delete Cancelled")
               return
           
   print("Student Not Found")

def update_students():

    rollno = input("Enter Student Roll No:- ")

    for st in students:
        
      
    
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
        search_students()

    elif choice == 4:
            delete_studentS()

    elif choice == 5:
        print("Update Students Details")

    elif choice == 6:
        print("Thank You!")
        break
    else:
        print("invalid choice")