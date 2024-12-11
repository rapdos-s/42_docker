FROM ubuntu:20.04

RUN apt update -y && apt upgrade -y

RUN apt install -y make
RUN apt install -y valgrind
RUN apt install -y gdb
RUN apt install -y clang-12

# norminette
RUN apt update -y && apt upgrade -y
RUN apt install -y python3 python3-pip
RUN python3 -m pip install norminette
RUN echo "export PATH=$PATH:~/.local/bin" >> ~/.bashrc

WORKDIR /volume

RUN useradd --create-home --shell /bin/bash marvin

RUN echo "PS1=\"[ \h | \u ] [ \w ]\n\$ \"" >> /home/marvin/.bashrc
RUN echo "alias python=python3" >> /home/marvin/.bashrc
RUN echo "alias clang=clang-12" >> /home/marvin/.bashrc
RUN echo "alias gcc=clang" >> /home/marvin/.bashrc
RUN echo "alias cc=clang" >> /home/marvin/.bashrc

USER marvin

CMD ["tail", "-f", "/dev/null"]
