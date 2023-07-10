<?php
    require_once 'conexao.php';

    $nome = $_POST['txt_nome'];
    $fone = $_POST['txt_fone'];
    $email = $_POST['txt_email'];
    $senha = $_POST['txt_senha'];
    $senha2 = $_POST['txt_senha2'];

    if($senha != $senha2){
        header("location: login.php");
    }else{

        $query = $conecta->prepare("INSERT INTO cliente(nome, email, senha, fone) VALUES ('$nome', '$email',$senha,'$fone')");
        $query->execute();

        session_start();
        $_SESSION['login'] = $nome;

        header("location: index.php");
    }


?>