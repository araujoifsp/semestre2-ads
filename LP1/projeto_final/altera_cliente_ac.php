<?php
    require_once("conexao.php");
    session_start();
    $id = $_SESSION['id'];
    $nome = $_POST['new_nome'];
    $fone = $_POST['new_fone'];
    $email = $_POST['new_email'];
    $query = $conecta->prepare("UPDATE cliente SET nome = '$nome', fone = '$fone', email = '$email' WHERE id = $id");
    $query->execute();
    header("location: user.php?id=$id");
?>