cmake_minimum_required(VERSION 3.1...3.25)

# This is your project statement. You should always list languages;
# Listing the version is nice here since it sets lots of useful variables
project(
  test
  VERSION 1.0
  LANGUAGES CXX)

# If you set any CMAKE_ variables, that can go here.
# (But usually don't do this, except maybe for C++ standard)

# Find packages go here.

# You should usually split this into folders, but this is a simple example

# Link each target with other targets or add options, etc.

# Adding something we can run - Output name matches target name
add_executable(main src/main.cpp)

target_include_directories(main
 PRIVATE
  include/)