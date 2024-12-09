FROM ubuntu:20.04

RUN apt update -y && apt upgrade -y

RUN apt install -y make
RUN apt install -y valgrind
RUN apt install -y gdb

# clang, gcc, cc
RUN apt install -y clang-12
RUN echo "alias clang=clang-12" >> ~/.bashrc
RUN echo "alias gcc=clang" >> ~/.bashrc
RUN echo "alias cc=clang" >> ~/.bashrc

# norminette
RUN apt install -y python3 python3-pip
RUN python3 -m pip install pip
RUN python3 -m pip install setuptools
RUN python3 -m pip install norminette
RUN echo "export PATH=$PATH:~/.local/bin" >> ~/.bashrc
RUN echo "alias python=python3" >> ~/.bashrc

WORKDIR /volume

RUN echo "PS1=\"[ \h | \u ] [ \w ]\n\$ \"" >> ~/.bashrc

CMD ["tail", "-f", "/dev/null"]
