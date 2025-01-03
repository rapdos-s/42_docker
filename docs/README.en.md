# 42 Docker Environment

This repository contains a basic Docker environment for studies at 42. It provides a minimal setup for development and project execution, with pre-configured essential tools.

The container is based on the `ubuntu:latest` image.

## Repository Structure

- **`Dockerfile`**: Defines the base image and configurations, including tools like `clang`, `make`, `valgrind`, and `Norminette`.
- **`docker-compose.yml`**: Configures the container and maps volumes for data persistence.
- **`Makefile`**: Simplifies common commands for managing the Docker environment, such as building, starting, and accessing the container.
- **`volume/`**: Empty directory for persistent data storage.

## Requirements

- `Docker`
- `Docker Compose`
- `Make`

## Available Commands

### Using Makefile

Basic rules
- **`make all`**: Removes the container and associated volumes, build the environment and opens a terminal inside the container.
- **`make fclean`**: Stop the containers, fully cleans and removes everything, including volumes.
- **`make re`**: Rebuilds the environment from scratch.


### Using Docker Compose

Alternatively, you can use Docker Compose commands directly, such as:

```bash
docker-compose up
docker-compose down
docker-compose exec ecole_42 bash
```

Feel free to contribute with improvements or open issues for questions and suggestions! Keep in mind that I may take some time 👀