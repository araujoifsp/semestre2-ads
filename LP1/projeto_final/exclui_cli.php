<?php
    require_once 'conexao.php';

    $codigo = $_GET['id'];

    $select = $conecta->prepare("DELETE FROM carrinho where id_compra='$codigo'");
    $select->execute();
    $exclui=$conecta->prepare("DELETE FROM cliente where id='$codigo'");
    $exclui->execute();
?>