# example of loading the mnist dataset
#import input_data
#from keras.datasets import mnist
#from matplotlib import pyplot
#mnist=tf.keras.datasets.mnist
# load dataset
#(trainX, trainy), (testX, testy) = mnist.load_data()
# summarize loaded dataset
#print('Train: X=%s, y=%s' % (trainX.shape, trainy.shape))
#print('Test: X=%s, y=%s' % (testX.shape, testy.shape))
# plot first few images
#for i in range(9):
	# define subplot
	#pyplot.subplot(330 + 1 + i)
	# plot raw pixel data
	#pyplot.imshow(trainX[i], cmap=pyplot.get_cmap('gray'))
# show the figure
#pyplot.show()
# Import Libraries
import os
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "2"
import numpy as np
import tensorflow as tf
import tensorflow.keras.layers  as KL
import tensorflow.keras.models  as KM

## Dataset
mnist = tf.keras.datasets.mnist
(x_train, y_train), (x_test, y_test) = mnist.load_data()
x_train, x_test = x_train/255.0, x_test/255.0
x_train, x_test = np.expand_dims(x_train, axis=-1), np.expand_dims(x_test, axis=-1)
print x_train.shape
## Model
inputs = KL.Input(shape=(28, 28, 1))
print inputs
#c = KL.Conv2D(32, (3, 3), padding="valid", activation=tf.nn.relu)(inputs)
#m = KL.MaxPool2D((2, 2), (2, 2))(c)
#d = KL.Dropout(0.5)(m)
#c = KL.Conv2D(64, (3, 3), padding="valid", activation=tf.nn.relu)(d)
#m = KL.MaxPool2D((2, 2), (2, 2))(c)
#d = KL.Dropout(0.5)(m)
#c = KL.Conv2D(128, (3, 3), padding="valid", activation=tf.nn.relu)(d)
#f = KL.Flatten()(c)
#outputs = KL.Dense(10, activation=tf.nn.softmax)(f)

#model = KM.Model(inputs, outputs)
#model.summary()
#model.compile(optimizer="adam",
 #               loss="sparse_categorical_crossentropy",
 #               metrics=["accuracy"])

#model.fit(x_train, y_train, epochs=5)
#test_loss, test_acc = model.evaluate(x_test, y_test)
#print("Test Loss: {0} - Test Acc: {1}".format(test_loss, test_acc))
