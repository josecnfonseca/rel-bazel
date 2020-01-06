from lib.hellotime import print_localtime
from hellogreet import get_greet
import sys

if __name__ == "__main__":
	who = "CTW"
	if len(sys.argv) > 1:
		who = (sys.argv)[1]
	print(get_greet(who))
	print_localtime()
