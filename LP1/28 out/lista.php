<?php
    session_start();
    $nome = $_SESSION["usuario"];
?>
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Lista Produto</title>
</head>
<body>
    <h1>Dados do Pedido: </h1>
    <table border=1>
        <th colspan="3">Nome: <?php  echo(strtoupper($nome));?></th>
        <tr>
            <td>Codigo</td>
            <td>Descrição</td>
            <td>Preço</td>
        </tr>
        <tr>
            <td><?php echo($_COOKIE['produto']);?></td>
            <td><?php echo($_COOKIE['desc']);?></td>
            <td><?php echo($_COOKIE['preco']);?></td>
        </tr>
    </table>
</body>
</html>