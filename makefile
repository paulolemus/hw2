# TEAM: AMERICA

global: bankwithlist
bankwithlist: bankwithlist.cpp BasicAccount.cpp
	g++ bankwithlist.cpp BasicAccount.cpp -o bankwithlist --std=c++11
testdriver: testdriver.cpp
	g++ testdriver.cpp -o testdriver --std=c++11
testdriver2: testdriver2.cpp
	g++ testdriver2.cpp BasicAccount.cpp -o testdriver2 --std=c++11
