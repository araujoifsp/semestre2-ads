<?php
    session_start();
    require_once 'conexao.php';
?>
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/materialize/1.0.0/css/materialize.min.css">
    <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
    <link rel="stylesheet" href="css/index.css">
    <title>Loja</title>
    <script>
    </script>
</head>
<body>
    
<nav class="nav-extended">
    <div class="nav-wrapper indigo darken-4">
      <a href="index.php" class="brand-logo center"><img src="img/logo.png" alt="logomarca" id="logo"></a>
      <ul id="nav-mobile" class="letf hide-on-med-and-down">
        <li><?php if(isset($_SESSION['login'])){echo("<a href='user.php?id=".$_SESSION['id']."'>Olá ".strstr($_SESSION['login'], ' ', true)."</a>");}else{echo("<a href='login.html'>Login</a>");}?></li>
      </ul>
      <ul id="dropdown" class="right">
          <li>Categorias
            <ul>
              <li><a href="categoria.php?ct=1">Informatica</a></li>
              <li><a href="categoria.php?ct=2">Eletrodomestico</a></li>
              <li><a href="categoria.php?ct=3">Bebidas</a></li>
            </ul>
          </li>
      </ul>
    </div>
  </nav>