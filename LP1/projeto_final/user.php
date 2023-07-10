<?php
    include 'header.php';
    require_once 'conexao.php';

    $codigo = $_GET['id'];

    $selecao=$conecta->prepare("SELECT * FROM cliente where id='$codigo'");
    $selecao->execute();

    $registro = $selecao->fetch(PDO::FETCH_ASSOC);

    $nome = $registro['nome'];
    $email = $registro['email'];
    $fone = $registro['fone'];
?>
<div class="col s12 m7">
    
    <div class="card horizontal">
        <div class="card-image">
            <img id='user' src="img/user.png">
        </div>
      <div class="card-stacked">
      <h2 class="header"><?php echo($nome) ?></h2>  
        <div class="card-content">
            <h3>Dados Pessoais:</h3>
          <p>
            <?php 
                echo("Email:.........$email<br>");
                echo("Fone:..........$fone<br>"); 
            ?>
            </p>
        </div>
        <div class="card-action">
        <a href="logout.php">Sair</a><br>
        </div>
      </div>
    </div>

    
      <div class="card-stacked center">
            <div class="card-content">
            <h4>Opções</h4>
            <p>
            <br>
                <a href="altera_cliente.php?id=1">Editar Dados</a><br>
                <a href="altera_senha.php?id=1">Alterar Senha</a><br>
                <a href="exclui_cli.php?id=1">Deletar Conta</a>
            </p>
            </div>
        </div>
    </div>    
</div>
            
    
    


<?php
    include 'footer.php';
?>

