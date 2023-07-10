<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Produtos</title>
    <style>
        body{
            margin: 0;
            font-family: 'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;
            background-color: #f5f4eb;
        }
        header{
            width: 100%;
            margin-top: 0;
            padding: 10px;
            background-color: #0065b3;
            color: white;
            margin-bottom: 80px;
            box-shadow: 2px 2px 8px rgba(0, 0, 0, 0.61);
            text-shadow: 2px 2px 8px rgba(0, 0, 0, 0.61);
        }
        h3 > span{
            font-size: 15px;
            position: absolute;
            right: 20px;
        }
        table{
            border: 1px solid black;
            background-color: white;
            border-radius: 10px;
            box-shadow: 2px 2px 8px rgba(0, 0, 0, 0.61);
        }
    </style>
</head>
<body>
    
<?php
    session_start();
?>
<header>
    <?php
        echo "<h3>PRODUTOS EM PROMOÇÃO";
        $nome = $_SESSION["usuario"];
        echo "<span>Seja bem vindo " . strtoupper($nome)."</span></h3>";
    ?>
</header>
<?php
    echo "<table width='80%' align='center'>";
    echo "<tr align='center'><td><a href='a11_cookie1.php?prod=1'><img src='img/tenis1.jpg' alt='Tênis para corrida'><br>Tênis para corrida</a><br>R$ 400,00";
    echo "</td>";
    echo "<td>";
    echo "<a href='a11_cookie1.php?prod=2'><img src='img/tenis2.jpg' alt='Tênis para o dia a dia'><br>Tênis para o dia a dia</a><br>R$ 400,00";
    echo "</td>";
    echo "<td>";
    echo "<a href='a11_cookie1.php?prod=3'><img src='img/tenis3.jpg' alt='Tênis para treino'><br>Tênis para treino</a><br>R$ 400,00";
    echo "</td></tr>";
    echo "<tr align='center'><td><a href='a11_cookie1.php?prod=4'><img src='img/tenis4.jpg' alt='Tênis para corrida '><br>Tênis para corrida</a><br>R$ 400,00";
    echo "</td>";
    echo "<td><a href='a11_cookie1.php?prod=5'><img src='img/tenis5.jpg' alt='Chuteira campo'><br>Chuteira campo</a><br>R$ 400,00";
    echo "</td>";
    echo "<td><a href='a11_cookie1.php?prod=6'><img src='img/tenis6.jpg' alt='Tênis para corrida e academia'><br>Tênis para corrida e academia</a><br>R$ 400,00";
    echo "</td>";
?>

</body>
</html>