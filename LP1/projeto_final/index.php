<?php
    include_once 'header.php';
    $query = $conecta->prepare("SELECT * FROM produtos");
    $query->execute();
    ?>
    <table>
     <?php
        $i=0;
        while($linha = $query->fetch(PDO::FETCH_ASSOC)){
            if($i==0){
                echo('<tr>');
            }
            $i++;
        ?>
        
            <td>
                <a href='produtos.php?id=<?php echo($linha['id']);?>'><img src='img/<?php echo($linha['id']);?>.jpg' id='prod'><br><?php echo($linha['nome']);?></a><br>R$ <?php echo($linha['preco']);?><br>
                <a href="comprar.php?id=<?php echo($linha['id']);?>"><button>Comprar</button></a>
                <a href="produtos.php?id=<?php echo($linha['id']);?>"><button>Ver Mais</button></a>
            </td>
        <?php
            if($i==3){
                echo('</tr>');
                $i=0;
            }
                }
        ?>

    </table>

    
    

<?php
    include_once 'footer.php';
?>
