FROM ubuntu:20.04

RUN apt-get update

# basic C language tools
RUN apt-get install -y --no-install-recommends make valgrind gdb clang-12

# norminette
RUN apt-get install -y --no-install-recommends python3 python3-pip
RUN python3 -m pip install norminette
RUN echo "export PATH=$PATH:~/.local/bin" >> ~/.bashrc

# mlx
ENV DISPLAY=host.docker.internal:0
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get install -y --no-install-recommends git gcc xorg libxext-dev libbsd-dev
RUN git clone https://github.com/42Paris/minilibx-linux.git minilibx-linux
RUN make -C minilibx-linux
RUN mkdir -p /usr/local/lib /usr/local/include /usr/local/man/man3/
RUN cp minilibx-linux/libmlx.a /usr/local/lib
RUN cp minilibx-linux/libmlx_Linux.a /usr/local/lib/
RUN cp minilibx-linux/mlx.h /usr/local/include/
RUN cp minilibx-linux/man/man3/mlx* /usr/local/man/man3/

# Cleaning apt-get cache
RUN apt-get clean && rm -rf /var/lib/apt/lists/*

WORKDIR /volume

RUN useradd --create-home --shell /bin/bash marvin

RUN echo "PS1=\"[ \h | \u ] [ \w ]\n\$ \"" >> /home/marvin/.bashrc
RUN echo "alias python=python3" >> /home/marvin/.bashrc
RUN echo "alias clang=clang-12" >> /home/marvin/.bashrc
RUN echo "alias gcc=clang" >> /home/marvin/.bashrc
RUN echo "alias cc=clang" >> /home/marvin/.bashrc

USER marvin

CMD ["tail", "-f", "/dev/null"]
