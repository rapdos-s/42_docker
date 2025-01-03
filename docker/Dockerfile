FROM ubuntu:20.04

# Setting up environment variables
# DEBIAN_FRONTEND: Needed to avoid interactive installations (choose location, etc)
ENV DEBIAN_FRONTEND=noninteractive

# Adding users
RUN useradd --create-home --shell /bin/bash marvin

# Updating
RUN apt-get update

# Tools Instalations
# norminette:  Python3, Pyrhon3-pip
# mlx: git, gcc, xorg, libxext-dev, libbsd-dev
RUN apt-get install -y --no-install-recommends \
    nano           \
		vim            \
		wget           \
		make           \
		valgrind       \
		gdb            \
		clang-12       \
		python3        \
		python3-pip    \
		git            \
		gcc

		# xorg           \
		# libxext-dev    \
		# libbsd-dev

# Cleaning apt-get cache
RUN apt-get clean && rm -rf /var/lib/apt/lists/*

# norminette
RUN python3 -m pip install norminette

# mlx
# RUN git clone https://github.com/42Paris/minilibx-linux.git minilibx-linux
# RUN make -C minilibx-linux
# RUN mkdir -p /usr/local/lib
# RUN mkdir -p /usr/local/include
# RUN mkdir -p /usr/local/man/man3/
# RUN cp minilibx-linux/libmlx.a       /usr/local/lib
# RUN cp minilibx-linux/libmlx_Linux.a /usr/local/lib/
# RUN cp minilibx-linux/mlx.h          /usr/local/include/
# RUN cp minilibx-linux/man/man3/mlx*  /usr/local/man/man3/

# Setting up .bashrc
# export PATH=$PATH:~/.local/bin: Needed for norminette
RUN bashrc_config="                     \
export PATH=$PATH:~/.local/bin       \n \
PS1=\"[ \h | \u ] [ \w ]\n≡ \"       \n \
alias python=python3                 \n \
alias clang=clang-12                 \n \
alias gcc=clang                      \n \
alias cc=clang                       \n \
alias g++=clang                      \n \
alias c++=clang                      \n \
"                                    && \
echo $bashrc_config >> /root/.bashrc && \
echo $bashrc_config >> /home/marvin/.bashrc

# Set user to marvin 
USER marvin

# Set working directory to /volume
WORKDIR /volume

CMD ["tail", "-f", "/dev/null"]
