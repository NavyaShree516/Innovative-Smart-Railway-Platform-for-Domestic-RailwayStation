import cv2
cap=cv2.Videocapture(‘cars.mp4)
car_cascade=cv2.cascadeClassifier(‘carl.xml’)
while True:
 ret,frames=cap.read()
 gray=cv2.cvtColor(frames,cv2.COLOR_BGR2GRAY)
 trains=train_cascade.detectMultiScale(gray,1.1,9)
 for (x,y,w,h) in cars:
 plate=frames[y:y+h,x:x+w]
 cv2.rectangle(frames,(x,y),(x+w,y+h),(51,51,255),2)
 cv2.putText(frames,’train’,(x,y-10),
 cv2.FONT_HERSHEY_SIMPLEX,0.7,(255,255,255),2)
 cv2.imshow(‘train’,plate)
 frames=cv2.resize(frames,(600,400))
 cv2.imshow(‘Train Detection System’,frames)
 k=cv2.waitKey(30) & 0xff
 if k==27:
 break
 cv2.destroyAllWindows()
