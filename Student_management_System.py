import os
import pickle

# Class to represent a student
class Student:
    def __init__(self, student_id, name, grade, department):
        self.student_id = student_id
        self.name = name
        self.grade = grade
        self.department = department

    def display_info(self):
        print(f"ID: {self.student_id}, Name: {self.name}, Grade: {self.grade}, Department: {self.department}")

# Class to manage the student system
class StudentManagementSystem:
    def __init__(self, file_name="students.dat"):
        self.file_name = file_name
        self.students = self.load_students()

    def load_students(self):
        if os.path.exists(self.file_name):
            with open(self.file_name, "rb") as file:
                return pickle.load(file)
        return []

    def save_students(self):
        with open(self.file_name, "wb") as file:
            pickle.dump(self.students, file)

    def add_student(self, student):
        self.students.append(student)
        self.save_students()
        print("Student added successfully!")

    def update_student(self, student_id, name=None, grade=None, department=None):
        for student in self.students:
            if student.student_id == student_id:
                if name:
                    student.name = name
                if grade:
                    student.grade = grade
                if department:
                    student.department = department
                self.save_students()
                print("Student updated successfully!")
                return
        print("Student not found.")

    def delete_student(self, student_id):
        for student in self.students:
            if student.student_id == student_id:
                self.students.remove(student)
                self.save_students()
                print("Student removed successfully!")
                return
        print("Student not found.")

    def view_all_students(self):
        if not self.students:
            print("No students found.")
        for student in self.students:
            student.display_info()

    def search_student(self, student_id):
        for student in self.students:
            if student.student_id == student_id:
                student.display_info()
                return
        print("Student not found.")

# Main function
def main():
    sms = StudentManagementSystem()

    while True:
        print("\n--- Student Management System ---")
        print("1. Add Student")
        print("2. Update Student")
        print("3. Delete Student")
        print("4. View All Students")
        print("5. Search Student")
        print("6. Exit")

        choice = input("Enter your choice: ")
        if choice == "1":
            student_id = input("Enter ID: ")
            name = input("Enter Name: ")
            grade = input("Enter Grade: ")
            department = input("Enter Department: ")
            student = Student(student_id, name, grade, department)
            sms.add_student(student)

        elif choice == "2":
            student_id = input("Enter Student ID to update: ")
            name = input("Enter New Name (or leave blank): ")
            grade = input("Enter New Grade (or leave blank): ")
            department = input("Enter New Department (or leave blank): ")
            sms.update_student(student_id, name, grade, department)

        elif choice == "3":
            student_id = input("Enter Student ID to delete: ")
            sms.delete_student(student_id)

        elif choice == "4":
            sms.view_all_students()

        elif choice == "5":
            student_id = input("Enter Student ID to search: ")
            sms.search_student(student_id)

        elif choice == "6":
            print("Exiting the system. Goodbye!")
            break

        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
