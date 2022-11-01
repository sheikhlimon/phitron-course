class School:
    def __init__(self, name) -> None:
        self.school_name = name
        print("School init called")


class Grade:
    def __init__(self, grade) -> None:
        self.grade_name = grade
        print("Grade class init called")


class Student(School, Grade):
    def __init__(self, name, grade_name, school_name) -> None:
        self.name = name
        Grade.__init__(self, grade_name)
        School.__init__(self, school_name)
        print("Student init called")


anata_j = Student("AJ", "MBA", "UK School")

print(anata_j.name)
print(anata_j.grade_name)
print(anata_j.school_name)
