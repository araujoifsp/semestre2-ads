<?php
      require_once 'conexao.php';

      session_start();

      if(isset($_POST['btn_login'])){
        $email = $_POST['txt_email'];
        $senha = $_POST['txt_senha'];
        $query = $conecta->prepare("SELECT * FROM cliente WHERE email LIKE '$email' AND senha LIKE '$senha'");
        $query->execute();
        if($query->rowCount() == 1){
            if($row = $query->fetch()){
                $_SESSION['id'] = $row['id'];
                $_SESSION['login'] = $row['nome'];
                header("location: index.php");
            }
            
        }else{
            echo('Login ou senha invalidos');
            header('location: login.php');
        }
    }
    else{
        header("location: login.html");
    }

?>