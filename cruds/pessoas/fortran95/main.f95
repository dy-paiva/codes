! ----------------------------------------------------------------
!  Crud de pessoas
! ----------------------------------------------------------------

program Pessoas
  character(30) :: items(3) = [character(30):: "1 - Lista de Pessoas", "2 - Cadastrar Pessoa", "0 - Sair"]
  character(100) :: line, nome
  character(100), dimension (:,:), allocatable :: lista_pessoas
  integer code
  integer i, reason

  do while (.TRUE.)
    call system('clear')

    write(*, "(X, A, /)", advance="no") "Escolha uma das opções:"

    do i = 0, size(items)
      write(*, "(X, A, /)", advance="no") items(i)
    end do

    write(*, "(/, X, A)", advance="no") "Opção: "

    read *, code
    call system("clear")

    select case (code)
    case (0)
      write(*, "(/, X, A, /)") "Obrigado!";
      return
    case (1)
      write(*, "(/, X, A, /)") "Lista de Pessoas";

      open(15, file="../records.txt", action='read')

      i = 1
      reason = 0
      do while (reason >= 0)
        line = ''

        read(15, "(A)", IOSTAT=reason), line
        if (line(1:2) == "//" .OR. line == '') cycle

        write(*, "(X, A, I1)") "----- Pessoa ", i
        write(*, "(XX, A, X, A, /)") "Nome:", line
        i = i + 1
      end do

      if (i == 1) write(*, "(X, A, /)") "Nenhuma pessoa encontrada"

      close(15)

      write(*, "(X, A)", advance="no") "Digite enter para continuar"
      read(*,*)
    case (2)
      nome = ''
      do while (nome == '')
        write(*, "(/, X, A, /)") "Cadastro de Pessoa (0 para cancelar)";
        write(*, "(X, A, X)", advance="no") "Nome:";
        read(*, "(A)") nome
      end do

      if (nome /= '0') then
        open(15, file="../records.txt", position="append", action="write")
        write(15, '(A)') trim(nome)
        close(15)
      end if
    end select
  enddo
end program Pessoas
