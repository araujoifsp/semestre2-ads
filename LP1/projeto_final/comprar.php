<?php
    require_once 'conexao.php';
    session_start();
    if(isset($_SESSION['login'])){
        $id = $_GET['id'];
        $user = $_SESSION['id'];
        $data = date('y/m/d');
        $query = $conecta->prepare("INSERT INTO carrinho (cliente, produto, data_compra) VALUES ('$user', '$id','$data')");
        $query->execute();
        header('location: lista.php');
    }else{
        header("location: login.html");
    }
?>