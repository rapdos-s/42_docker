# Ambiente Docker 42

Este repositório contém um ambiente Docker básico para estudos na 42. Ele fornece uma configuração mínima para desenvolvimento e execução de projetos, com ferramentas essenciais pré-configuradas.

O container é baseado na imagem `ubuntu:latest`.

## Estrutura do Repositório

- **`Dockerfile`**: Define a imagem base e as configurações, incluindo ferramentas como `clang`, `make`, `valgrind` e `Norminette`.
- **`docker-compose.yml`**: Configura o container e mapeia volumes para persistência de dados.
- **`Makefile`**: Simplifica comandos comuns para gerenciar o ambiente Docker, como construir, iniciar e acessar o container.
- **`volume/`**: Diretório vazio para armazenamento de dados persistentes.

## Requisitos

- `Docker`
- `Docker Compose`
- `Make`

## Comandos Disponíveis

### Usando o Makefile

Regras básicas
- **`make all`**: Remove o container e volumes associados, constrói o ambiente e abre um terminal dentro do container.
- **`make clean`**: Limpa o ambiente, parando o container.
- **`make fclean`**: Limpa e remove tudo, incluindo volumes.
- **`make re`**: Reconstrói o ambiente do zero.

Regras Docker
- **`make build`**: Constrói o container.
- **`make up`**: Cria e inicia o container em modo desacoplado.
- **`make down`**: Remove o container e os volumes associados.
- **`make stop`**: Para o container.
- **`make enter`**: Abre um terminal dentro do container.

Outras regras
- **`make sudo`**: Solicita permissão de sudo. Se você não precisar ou não puder usá-lo, altere a variável `need_sudo` para `false`.
- **`make ping`**: Pong... É basicamente isso...


### Usando o Docker Compose

Você também pode executar comando do Docker compose diretamente:

```bash
docker-compose up
docker-compose down
docker-compose exec ecole_42 bash
```

Sinta-se à vontade para contribuir com melhorias ou abrir *issues* para dúvidas e sugestões! Mas lembre-se, posso demorar um pouco 👀
