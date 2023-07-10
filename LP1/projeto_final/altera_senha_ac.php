<?php
    require_once("conexao.php");
    $id = $_GET['id'];
    $senha_atual = $_POST['senha'];
    $senha_nova = $_POST['new_senha'];
    $senha_nova1 = $_POST['new_senha1'];

    $selecao=$conecta->prepare("SELECT * FROM cliente where id='$id' and senha like '$senha_atual'");
    $selecao->execute();
    if($selecao->rowCount() == 1){
        if($senha_nova == $senha_nova1){
            $selecao=$conecta->prepare("UPDATE cliente SET senha = '$senha_nova' WHERE id = $id");
            $selecao->execute();
            header("location: user.php?id=$id");
        }
        else{
            header("location: altera_senha.php?id=$id");
        }

    }else{
        echo('Senha atual invalida');
        header("location: altera_senha.php?id=$id");
    }

?>
