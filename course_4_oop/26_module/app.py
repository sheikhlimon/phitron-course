'''CRUD operation using flask'''

from flask import Flask, request

database = {'limon': '20', 'kona': '10'}

app = Flask(__name__)


@app.route('/', methods=['GET'])
def home():
    return 'Welcome to API'


@app.route('/getdata/', methods=['GET'])
def get_data():
    return database


# api/adddata?name=id
@app.route('/adddata/', methods=['GET', 'PUT'])
def add_data():
    key, value = list(request.args.items())[0]
    database[key] = value
    return f"{key} added"


# api/deletedata?user=name
@app.route('/deletedata/', methods=['GET', 'DELETE'])
def delete_data():
    key, value = list(request.args.items())[0]
    database.pop(value)
    return f"{value} deleted"


if __name__ == '__main__':
    app.run()
