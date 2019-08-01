# Build base image Ubuntu ver 16.04 and install build-essential
FROM ubuntu:16.04
RUN apt-get update && apt-get install -y \
	git \
	build-essential 
RUN git clone http://github.com/catchorg/Catch2 \
	cd Catch2 \
	cmake -Bbuild -H. -DBUILD_TESTING=OFF \
	sudo cmake --build build/ --target install
COPY . 006_FRD_KL25Z
WORKDIR 006_FRD_KL25Z
