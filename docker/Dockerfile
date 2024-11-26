FROM ubuntu:latest

# Update and upgrade packages
RUN apt update -y && apt upgrade -y

# Basic C development tools
RUN apt install -y clang
RUN apt install -y make
RUN apt install -y valgrind

# Norminette
RUN apt install -y python3
RUN apt install -y python3-pip
RUN python3 -m pip install --upgrade --user --break-system-packages pip
RUN python3 -m pip install --upgrade --user --break-system-packages setuptools
RUN python3 -m pip install --upgrade --user --break-system-packages norminette
RUN echo "export PATH=$PATH:~/.local/bin" >> ~/.bashrc

# Aliases
RUN echo "export alias ping='pong'" >> ~/.bashrc

# Prompt PS1
RUN echo "PS1=\"\[$(tput bold)\]\[\033[0;30m\]42 São Paulo\[\033[38;5;251m\] | \w\[$(tput sgr0)\]\n👀 > \[$(tput sgr0)\]\"" >> ~/.bashrc

# Start in /volume directory
WORKDIR /volume

# Keep container running
CMD ["tail", "-f", "/dev/null"]
