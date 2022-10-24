"""
My camera application

author: limon
"""

import sys
import matplotlib.pyplot as plt
plt.plot([1, 2])
from PyQt5.QtWidgets import *
from PyQt5.QtGui import QPixmap, QImage, QIcon
import cv2


class Window(QWidget):
    """ Main app window """

    def __init__(self):
        super().__init__()

        # varibale for app window
        self.window_width = 640
        self.window_height = 400

        # image variables
        self.img_width = 640
        self.img_height = 400

        # setup the window
        self.setWindowTitle("My Camera App")
        self.setGeometry(150, 150, self.window_width, self.window_height)
        self.setFixedSize(self.window_width, self.window_height)

        self.ui()

    def ui(self):
        """contains all ui things"""
        self.image_label = QLabel(self)
        self.image_label.setGeometry(0, 0, self.img_width, self.img_height)

        self.show()

    def update(self):
        """update frames"""
        pass

    def save_image(self):
        """save image from camera"""
        pass

    def record(self):
        """record video"""
        pass


# run
app = QApplication(sys.argv)
win = Window()
sys.exit(app.exec_())
