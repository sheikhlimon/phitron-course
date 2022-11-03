import hashlib


class User:
    def __init__(self, name, email, password):
        self.name = name
        self.email = email
        encryted_pwd = hashlib.md5(password.encode()).hexdigest
        with open("out.txt", "w") as file:
            file.write(f"{email} {encryted_pwd}")
        file.close()
        print(self.name, "user created")

me = User("limon", "coc@gmail.com", "youcantseeme")