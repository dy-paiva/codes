! ----------------------------------------------------------------
!  Campo Minado
! ----------------------------------------------------------------

program Main
  CHARACTER(len=15) :: itemsMenu(3) = [character(15):: "1 - Nível 1", "2 - Nível 2", "0 - Sair"]
  INTEGER i, code;

  do while (.TRUE.)
    call system('clear');

    Print *, "Escolha uma das opções para poder jogar:"
    Print *,
    do i = 1, Size(itemsMenu)
      Print *, itemsMenu(i)
    end do
    Print *,

    read (*,*) code
    select case (code)
    case (0)
      Print *, 'Fim de jogo'
      Print *,
      return;
    case (1)
      Print *, 'Novo jogo'
    case (2)
      Print *, 'Novo jogo'
    end select
  end do

end program Main
