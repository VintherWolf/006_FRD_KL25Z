# Build base image Ubuntu ver 16.04 and install build-essential
FROM ubuntu:16.04
RUN apt-get update && apt-get install -y \
	build-essential
RUN apt-get install -y curl
RUN mkdir /usr/include/catch2 && curl https://raw.githubusercontent.com/catchorg/Catch2/master/single_include/catch2/catch.hpp >> /usr/include/catch2/catch.hpp

