<?php
    require_once("conexao.php");
    session_start();
    $compra = $_GET['compra'];
    $query = $conecta->prepare("UPDATE carrinho SET status = 1 WHERE id_compra = $compra");
    $query->execute();
    header("location: lista.php");
?>