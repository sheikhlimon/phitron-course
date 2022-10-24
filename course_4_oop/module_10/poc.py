import cv2

cap = cv2.VideoCapture('/dev/video0')

while True:
    _, frame = cap.read()

    cv2.imshow('image', frame)

    if cv2.waitKey(10) == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()