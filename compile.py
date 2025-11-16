import os
import subprocess

def compile_all():
    for file in os.listdir("."):
        if file.endswith(".c"):
            base = file[:-2] 
            exe = base + ".exe"

            if os.path.exists(exe):
                print(f"Skipping {file} (already has {exe})")
                continue

            print(f"Compiling {file} -> {exe}")
            try:
                subprocess.run(["gcc", file, "-o", exe], check=True)
                print(f"Compiled {exe}\n")
            except subprocess.CalledProcessError:
                print(f"Failed to compile {file}\n")

if __name__ == "__main__":
    compile_all()
