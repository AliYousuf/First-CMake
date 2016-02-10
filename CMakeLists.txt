
#PROJECT(ME)

#List of all source files
SET(MY_SRC_FILES main.cpp MyInfo.cpp)

#Set compile options
SET(CMAKE_CXX_FLAGS "-O2 -Wall")

#Add target for my programe 
ADD_EXECUTABLE(me ${MY_SRC_FILES})
