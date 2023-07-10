<?php
    include_once 'header.php';
    $id = $_GET['id'];
    $query = $conecta->prepare("SELECT * FROM produtos where id = $id");
    $query->execute();
    if($query->rowCount() == 1){
            $row = $query->fetch();
            $nome = $row['nome'];
            $preco = $row['preco'];
            $desc = $row['desc'];
            $tipo = $row['tipo'];
        }
    
?>
<div class="col s12 m7">
<h2 class="header"><?php echo($nome);?><br></h2>   
    <div class="card horizontal">
    <div class="card-image">
        <img src="img/<?php echo($id);?>.jpg" alt="" id="imagem">
    </div>
      <div class="card-stacked">
        <div class="card-content">
        <p>
            Descrição: <?php echo($desc);?><br>
            Tipo: <?php echo($tipo);?><br>
            <h2 class="left">R$: <?php echo($preco);?></h2>
        </p>
        </div>
        <div class="card-action">
          <a href="comprar.php?id=<?php echo($id); ?>"><button>Comprar</button></a>
        </div>
      </div>
    </div>
</div>
            
    

<?php
    include_once 'footer.php';
?>
