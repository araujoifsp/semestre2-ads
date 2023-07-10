<?php
    include_once('header.php');
    require_once('conexao.php');

    if(isset($_SESSION['login'])){
        $user = $_SESSION['id'];
        $query = $conecta->prepare("SELECT * FROM carrinho INNER JOIN produtos ON produtos.id = carrinho.produto WHERE cliente = $user");
        $query->execute();
    }else{
        header("location: login.html");
    }
?>
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Lista Pedidos</title>
</head>
<body>
    <h1>Compras</h1>
    <?php
        $i=0;
        while($linha = $query->fetch(PDO::FETCH_ASSOC)){
        $i++;    
    ?>
    <table id='tabela'>
        <tr>
            <td>Compra Nº: <?php echo($i);?></td>
        </tr>
        <tr>
            <td>Produto</td>
            <td>Preço</td>
            <td>Data Compra</td>
            <td>Status</td>
        </tr>
        <tr>
            <td><?php echo('Produto: '.$linha['nome']);?></td>
            <td><?php echo('Preco: '.$linha['preco']);?></td>
            <td><?php echo('Data: '.$linha['data_compra']);?></td>
            <td><?php if($linha['status'] == 0){echo('Não Enviado'); echo("<a href='enviar.php?compra=".$linha['id_compra']."'>Enviar</a>"); }else{echo('Enviado');} ?></td>
        </tr>
    </table>
    <?php
        }
    ?>
    
<?php
    include_once('footer.php');
?>