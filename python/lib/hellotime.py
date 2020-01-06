import time

def print_localtime():
	localtime = time.asctime( time.localtime(time.time()) )
	print(localtime)
