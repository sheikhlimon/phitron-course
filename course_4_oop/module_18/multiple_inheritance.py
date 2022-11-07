
class School:
    def __init__(self, name):
        self.schoolName = name

    def say_name(self):
        print(f"Hello I am {self.schoolName}")

    def __repr__(self):
        return f"School({self.schoolName})"


class Teacher:
    def __init__(self, name):
        self.teacherName = name

    def say_name(self):
        print(f"Hello I am {self.teacherName}")

    def __repr__(self):
        return f"Teacher({self.teacherName})"


class Student(Teacher, School):
    def __init__(self, name, teacherName, schoolName):
        Teacher.__init__(self, teacherName)
        School.__init__(self, schoolName)
        self.studentName = name

    def __repr__(self):
        return f"Student({self.studentName})"

student = Student('limon', 'farzana ms', "gces")
student.say_name()
