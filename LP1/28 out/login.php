<?php
    session_start();

    $usuario = $_POST['txtusuario'];
    $senha = $_POST['txtsenha'];

    $db_usuario = 'gabriel';
    $db_senha = '123456';

    if($usuario == NULL || $senha == NULL || $usuario != $db_usuario || $senha != $db_senha){
        echo("Acesso negado");
        header("location: index.html");
    }else{
        $_SESSION['usuario'] = $usuario;
        header("location: produtos.php");
    }

?>