name                 = ecole_42
docker-compose       = sudo docker-compose

all:
	@$(docker-compose) stop
	@$(docker-compose) build
	@$(docker-compose) up --detach
	@$(docker-compose) exec $(name) bash -c "clear && bash"

fclean:
	@$(docker-compose) stop
	@$(docker-compose) down --remove-orphans --volumes

re: fclean all

.PHONY: all fclean re
