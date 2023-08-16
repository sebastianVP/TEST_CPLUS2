# PARA CREAR UNA LLAVE SSH
---
- Comando inicial

  $ssh-keygen -t rsa -b 4096 -C "alex.valdezp22@gmail.com"

- Le damos a las opciones siguientes, yes

- Luego:

  $eval "$(ssh-agent -s)"

  $ssh-add ~/.ssh/id_rsa

- Mostramos el contenido del archivo id_rsa.pub
  $cat ~/.ssh/id_rsa.pub

- Copiamos el contenido del archivo id_rsa.pub y lo pegamos en el link
  https://github.com/settings/keys

- En la opcion del boto azul New SSH key, copiamos el contenido le asignamos un nombre

- Finalmente, para verificar que el ssh es correcto

  $ssh -T git@github.com
- Nos deberia indicar.
  Warning: Permanently added the ECDSA host key for IP address '' to the list of known hosts.
  Hi sebastianVP! You've succesfully authenticated, but Github not provided shell access.

- En la opcion de nuestro repositorio recien creado, recuerda debe ser con git.
  git remote add origin git@github.com:sebastianVP/TEST_CPLUS2.git
  git push -u origin main

