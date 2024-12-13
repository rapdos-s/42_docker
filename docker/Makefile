name                 = ecole_42
docker-compose       = sudo docker-compose

all:
	@$(docker-compose) up --build --detach
	@$(docker-compose) exec $(name) bash -c "clear && bash"

fclean:
	@$(docker-compose) down --remove-orphans --volumes

re: fclean all

.PHONY: all fclean re
