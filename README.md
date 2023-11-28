# Мой первый докер контейнер

## Загрузка первого образа
Загрузим легковесный дистрибутив Линукса Alpine Linux из Docker Hub
```
docker pull alpine
```

Проверим, что образ скачался
```
docker images
```
Можем запустить с командой `ls`
```
docker run alpine ls
```

И после выхода посмотреть что мы из него вышли
```
docker ps -a
```

И удалить
```
docker rm <CONTAINER ID>
```

Можем запустить и залезть вовнутрь
```
docker run --rm -it --entrypoint=/bin/sh alpine
```

Можно удалить и образ
```
docker rmi alpine
```

## Создание докер-образа
Создадим образ из Dockerfile'а 
```
docker build . -t hello-docker -f Dockerfile
```
И запустим
```
docker run --rm hello-docker Some Command Line Arguments
```
