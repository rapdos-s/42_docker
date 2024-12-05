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
- **`make fclean`**: Para os containers, limpa e remove tudo, incluindo volumes.
- **`make re`**: Reconstrói o ambiente do zero.

### Usando o Docker Compose

Você também pode executar comando do Docker compose diretamente:

```bash
docker-compose up
docker-compose down
docker-compose exec ecole_42 bash
```

Sinta-se à vontade para contribuir com melhorias ou abrir *issues* para dúvidas e sugestões! Mas lembre-se, posso demorar um pouco 👀
